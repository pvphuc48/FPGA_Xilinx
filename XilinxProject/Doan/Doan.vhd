----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:57:27 03/07/2018 
-- Design Name: 
-- Module Name:    Doan - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
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

entity Doan is
    Port ( CKHT : in  STD_LOGIC;
           BTN_NO : in  STD_LOGIC;
           SSEG : out  STD_LOGIC_VECTOR (7 downto 0);
           BELL : out  STD_LOGIC;
           ANODE : out  STD_LOGIC_VECTOR (7 downto 0));
end Doan;

architecture Behavioral of Doan is
SIGNAL ENA_DB, ENA1KHZ, RST: STD_LOGIC;
SIGNAL: GIAY, PHUT: STD_LOGIC_VECTOR (5 downto 0);
SIGNAL: GIO: STD_LOGIC_VECTOR (4 downto 0);
SIGNAL: GIOT, PHUT: STD_LOGIC_VECTOR (5 downto 0);

SIGNAL: CH_GIO, DV_GIO: STD_LOGIC_VECTOR (3 downto 0);
SIGNAL: CH_PHUT, DV_PHUT: STD_LOGIC_VECTOR (3 downto 0);
SIGNAL: CH_GIAY, DV_GIAY: STD_LOGIC_VECTOR (3 downto 0);

SIGNAL: DAU_CHAM_8LED: STD_LOGIC_VECTOR (7 downto 0);
SIGNAL: ENA_GIAIMA_8LED: STD_LOGIC_VECTOR (7 downto 0);


begin
	BELL <= '1';
	RST <= NOT BTN_NO;
	DAU_CHAM_8LED <= X"FF";
	ENA_GIAIMA_8LED <= X"DB";

	GIOT <= '0' & GIO;
CHIA_10ENA: ENTITY WORK.CHIA_10ENA
	PORT MAP (CKHT => CKHT,
				ENA20KHZ => ENB,
				ENA1KHZ => ENA1KHZ);
DEM_GIOPHUTGIAY: ENTITY WORK.DEM_GIOPHUTGIAY
	PORT MAP (CKHT => CKHT,
				RST => RST,
				ENA_DB => ENA_DB,
				GIO => GIO,
				PHUT => PHUT,
				GIAY => GIAY);
HEXTOBCD_GIO: ENTITY WORK.HEXTOBCD_6BIT
	PORT MAP ( SOHEX6BIT => GIOT,
				DONVI => DV_GIO,
				CHUC => CH_GIO);
HIENTHI_8LED: ENTITY WORK.GIAIMA_8LED_7DOAN
	PORT MAP ( CKHT => CKHT,
				ENA1KHZ => ENA1KHZ,
				LED70 => DV_GIAY,
				LED71 => CH_GIAY,
				LED72 => X"F",
				LED73 => DV_PHUT,
				LED74 => CH_PHUT,
				LED75 => X"F",
				LED76 => DV_GIO,
				LED77 => CH_GIO,
				DAU_CHAM_8LED => DAU_CHAM_8LED,
				ENA_GIAIMA_8LED => ENA_GIAIMA_8LED,
				ANODE => ANODE,
				SSEG => SSEG);
end Behavioral;

