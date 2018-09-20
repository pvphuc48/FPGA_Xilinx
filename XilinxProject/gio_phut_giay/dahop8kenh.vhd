----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:33:08 03/07/2018 
-- Design Name: 
-- Module Name:    dahop8kenh - Behavioral 
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
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity dahop_8kenh is
port ( sel_3b : in std_logic_vector( 2 downto 0);
		 led0, led1, led2, led3: in std_logic_vector(3 downto 0);
		 led4, led5, led6, led7: in std_logic_vector(3 downto 0);
		 daucham8led: in std_logic_vector( 7 downto 0);
		 ena_giaima_8led: in std_logic_vector(7 downto 0);
		 
		 daucham1led,ena_giaima_1led: out std_logic;
		 so_giaima: out std_logic_vector(3 downto 0));
end dahop_8kenh;

architecture Behavioral of dahop_8kenh is

begin
PROCESS(sel_3b,led0, led1, led2, led3, led4, led5, led6, led7,
		  daucham8led,	ena_giaima_8led)
		  begin 
			 case sel_3b is
			   when "000" => so_giaima  <= led0;
			   when "001" => so_giaima  <= led1;
			   when "010" => so_giaima  <= led2;
				when "011" => so_giaima  <= led3;
			   when "100" => so_giaima  <= led4;
				when "101" => so_giaima  <= led5;
				when "110" => so_giaima  <= led6;
				when others => so_giaima <= led7;
			end case;
end process;
process(sel_3b,daucham8led)
				begin 
					case sel_3b is
						when "000" => daucham1led <= daucham8led(0);
						when "001" => daucham1led <= daucham8led(1);
						when "010" => daucham1led <= daucham8led(2);
						when "011" => daucham1led <= daucham8led(3);
						when "100" => daucham1led <= daucham8led(4);
						when "101" => daucham1led <= daucham8led(5);
						when "110" => daucham1led <= daucham8led(6);
						when others => daucham1led <= daucham8led(7);
					end case;
end process;
process(sel_3b,ena_giaima_8led)
				begin 
					case sel_3b is
						when "000" => ena_giaima_1led <= ena_giaima_8led(0);
						when "001" => ena_giaima_1led <= ena_giaima_8led(1);
						when "010" => ena_giaima_1led <= ena_giaima_8led(2);
						when "011" => ena_giaima_1led <= ena_giaima_8led(3);
						when "100" => ena_giaima_1led <= ena_giaima_8led(4);
						when "101" => ena_giaima_1led <= ena_giaima_8led(5);
						when "110" => ena_giaima_1led <= ena_giaima_8led(6);
						when others => ena_giaima_1led <= ena_giaima_8led(7);
					end case;
end process;										
end Behavioral;

