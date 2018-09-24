----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:15:15 10/04/2016 
-- Design Name: 
-- Module Name:    clock_divide - Behavioral 
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
library UNISIM;
use UNISIM.VComponents.all;

entity clock_divide is
    Port ( clock_osc : in  STD_LOGIC;
           clock_div : out  STD_LOGIC);
end clock_divide;

architecture Behavioral of clock_divide is

signal clock_div_int : std_logic;
signal count : integer range 0 to 150000 := 0;

begin

frequency_divider: process (clock_osc) begin
       
        if rising_edge(clock_osc) then
            if (count = 50) then
                clock_div_int <= NOT(clock_div_int);
                count <= 0;
            else
                count <= count + 1;
            end if;
        end if;
    end process;
   
    clock_div <= clock_div_int;
	
end Behavioral;

