----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:46:24 03/07/2018 
-- Design Name: 
-- Module Name:    hex_to_bcd_6bit - Behavioral 
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

entity hex_to_bcd_6bit is
PORT ( sohex6bit : in std_logic_vector(5 downto 0);
		 donvi,chuc : out std_logic_vector(3 downto 0));
		 
end hex_to_bcd_6bit;

architecture Behavioral of hex_to_bcd_6bit is

begin
process (sohex6bit)
	variable bcd_hex: std_logic_vector(13 downto 0);
	variable dem:integer range 0 to 5;
	begin
		bcd_hex:="00000000"&sohex6bit;
		dem:=5;
		while dem>0
		loop 
			bcd_hex:=bcd_hex(12 downto 0) & bcd_hex(13);
			dem:=dem-1;
			if bcd_hex(9 downto 6) >="0101" then
			   bcd_hex(9 downto 6) :=bcd_hex(9 downto 6) + "0011";
			end if;
			if bcd_hex(13 downto 10) >="0101" then
			   bcd_hex(13 downto 10) :=bcd_hex(13 downto 10) + "0011";
			end if;
		end loop;
			bcd_hex:=bcd_hex(12 downto 0)& '0';
			donvi <= bcd_hex(9 downto 6);
			chuc <= bcd_hex(13 downto 10);
end process;			

end Behavioral;

