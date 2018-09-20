----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:16:32 03/07/2018 
-- Design Name: 
-- Module Name:    DEm_GIOPHUTGIAY - Behavioral 
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

entity DEm_GIOPHUTGIAY is
PORT ( CKHT, ENA_DB, RST, ENA_UP, ENA_DW, ENA_CHINH, ENA_UD: IN STD_LOGIC;
		GIATRI_MOD: IN STD_LOGIC_VECTOR(1 DOWNTO 0);
		GIAY,PHUT: OUT STD_LOGIC_VECTOR(5 DOWNTO 0);
		GIO: OUT STD_LOGIC_VECTOR(4 DOWNTO 0));
end DEm_GIOPHUTGIAY;

architecture Behavioral of DEm_GIOPHUTGIAY is
SIGNAL GIAY_REG, GIAY_NEXT: STD_LOGIC_VECTOR(5 DOWNTO 0);
SIGNAL PHUT_REG, PHUT_NEXT: STD_LOGIC_VECTOR(5 DOWNTO 0);
SIGNAL GIO_REG, GIO_NEXT: STD_LOGIC_VECTOR(4 DOWNTO 0);
begin

PROCESS(CKHT, RST)
	BEGIN
		IF RST='1' THEN  GIAY_REG <= (OTHERS => '0');
							  PHUT_REG <= (OTHERS => '0');
                       GIO_REG <=  (OTHERS => '0');
		ELSIF FALLING_EDGE (CKHT) THEN  
                                    GIAY_REG <= GIAY_NEXT;
												PHUT_REG <= PHUT_NEXT;
												GIO_REG <= GIO_NEXT;	
   END IF;
END PROCESS;

PROCESS(GIAY_REG, ENA_DB, GIATRI_MOD, ENA_UP, ENA_DW, ENA_CHINH, ENA_UD)
BEGIN
GIAY_NEXT  <= GIAY_REG;
IF ENA_DB = '1' THEN
  IF ENA_UD = '1' THEN
      IF GIAY_REG = "111011" THEN   GIAY_NEXT <= (OTHERS => '0');
      ELSE  GIAY_NEXT <= GIAY_REG +1;
      END IF;
  ELSIF	ENA_UD = '0' THEN GIAY_NEXT <= GIAY_REG -1;
  END IF;
ELSIF GIATRI_MOD ="01" AND ENA_UP = '1' AND ENA_CHINH = '1' THEN
  IF GIAY_REG = "111011" THEN   GIAY_NEXT <= (OTHERS => '0');
  ELSE  GIAY_NEXT  <= GIAY_REG +1;
  END IF;
ELSIF GIATRI_MOD ="01" AND ENA_DW = '1' AND ENA_CHINH = '1' THEN
  IF GIAY_REG = "000000" THEN GIAY_NEXT <= "111011";
  ELSE GIAY_NEXT <= GIAY_REG -1;
  END IF;
END IF;
END PROCESS;	

PROCESS(GIAY_REG, PHUT_REG, ENA_DB, GIATRI_MOD, ENA_UP, ENA_DW, ENA_CHINH, ENA_UD)
BEGIN
PHUT_NEXT  <= PHUT_REG;
IF ENA_DB = '1' THEN
  IF ENA_UD = '1' AND GIAY_REG ="111011" THEN
      IF PHUT_REG = "111011" THEN   GIAY_NEXT <= (OTHERS => '0');
      ELSE  PHUT_NEXT <= PHUT_REG +1;
      END IF;
  ELSIF	ENA_UD = '0' AND GIAY_REG ="000001" THEN PHUT_NEXT <= PHUT_REG -1;
  END IF;
ELSIF GIATRI_MOD ="01" AND ENA_UP = '1' AND ENA_CHINH = '1' THEN
  IF PHUT_REG = "111011" THEN   PHUT_NEXT <= (OTHERS => '0');
  ELSE  PHUT_NEXT  <= PHUT_REG +1;
  END IF;
ELSIF GIATRI_MOD ="01" AND ENA_DW = '1' AND ENA_CHINH = '1' THEN
  IF PHUT_REG = "000000" THEN PHUT_NEXT <= "111011";
  ELSE PHUT_NEXT <= PHUT_REG -1;
  END IF;
END IF;
END PROCESS;	

PROCESS(GIAY_REG, PHUT_REG, GIO_REG, ENA_DB, GIATRI_MOD, ENA_UP, ENA_DW, ENA_CHINH, ENA_UD)
BEGIN
GIO_NEXT  <= GIO_REG;
IF ENA_DB = '1' THEN
  IF ENA_UD = '1' AND GIAY_REG ="111011" AND PHUT_REG="111011" THEN
      IF GIO_REG = "10111" THEN   GIO_NEXT <= (OTHERS => '0');
      ELSE  GIO_NEXT <= GIO_REG +1;
      END IF;
  ELSIF	ENA_UD = '0' AND PHUT_REG ="000000" AND GIAY_REG ="000000" THEN PHUT_NEXT <= PHUT_REG -1;
  END IF;
ELSIF GIATRI_MOD ="11" AND ENA_UP = '1' AND ENA_CHINH = '1' THEN
  IF GIO_REG = "111011" THEN   GIO_NEXT <= (OTHERS => '0');
  ELSE  GIO_NEXT  <= GIO_REG +1;
  END IF;
ELSIF GIATRI_MOD ="11" AND ENA_DW = '1' AND ENA_CHINH = '1' THEN
  IF GIO_REG = "000000" THEN GIO_NEXT <= "10111";
  ELSE GIO_NEXT <= GIO_REG -1;
  END IF;
END IF;
END PROCESS;

GIAY <= GIAY_REG;
PHUT <= PHUT_REG;
GIO  <= GIO_REG;	

end Behavioral;

