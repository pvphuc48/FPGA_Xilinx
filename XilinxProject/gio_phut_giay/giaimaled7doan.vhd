----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:08:14 03/07/2018 
-- Design Name: 
-- Module Name:    giaimaled7doan - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity giaima_7doan_ena is
port ( so_giaima: in std_logic_vector ( 3 downto 0);
		 daucham1led, ena_giaima_1led : in std_logic;
		 sseg: out std_logic_vector ( 7 downto 0));
end giaima_7doan_ena;

architecture Behavioral of giaima_7doan_ena is

begin
process (so_giaima, daucham1led, ena_giaima_1led )
	begin
	if ena_giaima_1led = '0' then sseg <= x"FF";
	else 
		case so_giaima is
			when x"0" => sseg <= daucham1led & "1000000";
			when x"1" => sseg <= daucham1led & "1111001";
			when x"2" => sseg <= daucham1led & "0100100";
			when x"3" => sseg <= daucham1led & "0110000";
			when x"4" => sseg <= daucham1led & "0011001";
			when x"5" => sseg <= daucham1led & "0010010";
			when x"6" => sseg <= daucham1led & "0000010";
			when x"7" => sseg <= daucham1led & "1111000";
			when x"8" => sseg <= daucham1led & "0000000";
			when x"9" => sseg <= daucham1led & "0010000";
			when x"A" => sseg <= daucham1led & "0001000";
			when x"B" => sseg <= daucham1led & "0000011";
			when x"C" => sseg <= daucham1led & "1000110";
			when x"D" => sseg <= daucham1led & "1000110";
			when x"E" => sseg <= daucham1led & "1001110";
		end case;
		end if;	
end process;
end Behavioral;

