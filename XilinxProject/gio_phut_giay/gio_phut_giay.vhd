library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity gio_phut_giay is
    Port ( CKHT : in  STD_LOGIC;
           BTN_NO : in  STD_LOGIC;
           SSEG : out  STD_LOGIC_VECTOR (7 downto 0);
           BELL : out  STD_LOGIC;
           ANODE : out  STD_LOGIC_VECTOR (7 downto 0));
end gio_phut_giay;

architecture Behavioral of gio_phut_giay is
SIGNAL ENA_DB, ENA1KHZ, ENA_CHINH, RST: STD_LOGIC;
SIGNAL GIAY, PHUT: STD_LOGIC_VECTOR (5 downto 0);
SIGNAL GIO: STD_LOGIC_VECTOR (4 downto 0);
SIGNAL GIOT, PHUT: STD_LOGIC_VECTOR (5 downto 0);

SIGNAL CH_GIO, DV_GIO: STD_LOGIC_VECTOR (3 downto 0);
SIGNAL CH_PHUT, DV_PHUT: STD_LOGIC_VECTOR (3 downto 0);
SIGNAL CH_GIAY, DV_GIAY: STD_LOGIC_VECTOR (3 downto 0);

SIGNAL BTN_UP, BTN_DW, BTN_MOD: STD_LOGIC;
SIGNAL ENA_UP, ENA_DW, ENA_MOD: STD_LOGIC;

SIGNAL GIATRI_MOD: STD_LOGIC_VECTOR(1 downto 0);
SIGNAL DAU_CHAM_8LED: STD_LOGIC_VECTOR (7 downto 0);
SIGNAL ENA_GIAIMA_8LED: STD_LOGIC_VECTOR (7 downto 0);


begin
	BELL <= '1';
	RST <= NOT BTN_N(0);
	BST_UP <= NOT BTN_N(1);
	BST_MOD <= NOT BTN_N(2);
	BTN_MOD <= NOT BTN_N(3);
	
	DAU_CHAM_8LED <= X"FF";
	ENA_GIAIMA_8LED <= X"DB";

	GIOT <= '0' & GIO;
CHIA_10ENA: ENTITY WORK.CHIA_10ENA
	PORT MAP (CKHT => CKHT,
				ENA5HZ => ENA_DB,
				ENA5HZ => ENA_CHINH,
				ENA1KHZ => ENA1KHZ);
--Chong doi cho 2 nut nhan
DEBOUNCE_UP: ENTITY WORK.DEBOUNCE_BTN
					PORT MAP ( CKHT => CKHT,
									BTN => BTN_UP,
									DB_TICK=>ENA_UP);
DEBOUNCE_DW: ENTITY WORK.DEBOUNCE_BTN
					PORT MAP ( CKHT => CKHT,
									BTN => BTN_DW,
									DB_TICK=>ENA_DW);
CD_LAM_HEP_BTN_MOD: ENTITY WORK.CD_LAM_HEP_BTN
					PORT MAP ( CKHT => CKHT,
									BTN => BTN_MOD,
									BTN_CDLH => ENA_MOD);
XULY_MOD_DAUCHAM: ENTITY WORK.XULY_MOD_DAUCHAM
					PORT MAP ( CKHT => CKHT,
								   ENA_DB => ENA_MOD,
									GIATRI_MOD => GIATRI_MOD,
									DAU_CHAM_8LED=> DAU_CHAM_8LED);	
DEM_GIOPHUTGIAY: ENTITY WORK.DEM_GIOPHUTGIAY
	PORT MAP (CKHT => CKHT,
				RST => RST,
				ENA_DB => ENA_DB,
				GIATRI_MOD=>GIATRI_MOD,
				ENA_UP => ENA_UP,
				ENA_DW => ENA_DW,
				ENA_CHINH=>ENA_CHINH,
				ENA_UD=> ENA_UD,
				GIO => GIO,
				PHUT => PHUT,
				GIAY => GIAY);
HEXTOBCD_GIO: ENTITY WORK.hex_to_bcd_6bit
	PORT MAP ( SOHEX6BIT => GIOT,
				DONVI => DV_GIO,
				CHUC => CH_GIO);
HEXTOBCD_PHUT: ENTITY WORK.hex_to_bcd_6bit
	PORT MAP ( SOHEX6BIT => PHUT,
				DONVI => DV_PHUT,
				CHUC => CH_PHUT);
HEXTOBCD_GIAY: ENTITY WORK.hex_to_bcd_6bit
	PORT MAP ( SOHEX6BIT => GIAY,
				DONVI => DV_GIAY,
				CHUC => CH_GIAY);				
giaima_hienthi_8led_7doan: ENTITY WORK.giaima_hienthi_8led_7doan
	PORT MAP ( ckht => ckht,
				ena1khz => ena1khz,
				led0 => DV_GIAY,
				led1 => CH_GIAY,
				led2 => X"F",
				led3 => DV_PHUT,
				led4 => CH_PHUT,
				led5 => X"F",
				led6 => DV_GIO,
				led7 => CH_GIO,
				daucham8led => daucham8led,
				ena_giaima_8led => ena_giaima_8led,
				ANODE => ANODE,
				SSEG => SSEG);
end Behavioral;

