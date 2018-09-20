----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:34:30 03/07/2018 
-- Design Name: 
-- Module Name:    chia_10ena_1hz_1mhz - Behavioral 
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

entity chia_10ena_1hz_1mhz is
 port ( CKHT : in std_logic;
		  ENA5HZ : out std_logic);
		  
end chia_10ena_1hz_1mhz;

architecture Behavioral of chia_10ena_1hz_1mhz is
constant N: integer := 50000000;
signal D5HZ_REG, D5HZ_NEXT: integer range 0 to N/5:=1;


begin
process(CKHT)

begin 
	if Falling_edge(CKHT) then D5HZ_REG<=D5HZ_NEXT;
	END IF;
END PROCESS;

			D5HZ_NEXT<=1 WHEN D5HZ_REG=N/5 ELSE
							D5HZ_REG +1;
			ENA5HZ <= '1' WHEN D5HZ_REG = N/10 ELSE
						'0';
end Behavioral;

