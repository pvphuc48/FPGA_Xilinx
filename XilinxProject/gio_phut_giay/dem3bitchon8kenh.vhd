----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:13:27 03/07/2018 
-- Design Name: 
-- Module Name:    dem3bitchon8kenh - Behavioral 
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

entity dem_3bit_chon_8kenh is
PORT ( CKHT, ENA1KHZ : IN STD_LOGIC;
			 q          : out std_logic_vector(2 downto 0));
			 
end dem_3bit_chon_8kenh;

architecture Behavioral of dem_3bit_chon_8kenh is
signal q_reg, q_next : std_logic_vector(2 downto 0) :="000";
begin	
	process(CKHT)
	begin 
		if falling_edge(ckht) then q_reg <= q_next; end if;
	end process;
		q_next <= not q_reg when ena1khz = '1' else
						  q_reg;
		q <= q_reg;
		


end Behavioral;

