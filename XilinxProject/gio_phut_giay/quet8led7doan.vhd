----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:23:36 03/07/2018 
-- Design Name: 
-- Module Name:    quet8led7doan - Behavioral 
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
use IEEE.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity quet_anode_8led_7doan is
port ( sel_3b : in std_logic_vector( 2 downto 0);
		 ANODE : out std_logic_vector(7 downto 0));
end quet_anode_8led_7doan;

architecture Behavioral of quet_anode_8led_7doan is

begin
	process(sel_3b)
	begin
		case sel_3b is
			when "000"  => ANODE <= "11111110";
			when "001"  => ANODE <= "11111101";
			when "010"  => ANODE <= "11111011";
			when "011"  => ANODE <= "11110111";
			when "100"  => ANODE <= "11101111";
			when "101"  => ANODE <= "11011111";
			when "110"  => ANODE <= "10111111";
			when others => ANODE <= "01111111";
		end case;
	end process;
		
end Behavioral;

