----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:39:27 03/07/2018 
-- Design Name: 
-- Module Name:    giaima_hienthi_8led_7doan - Behavioral 
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

entity giaima_hienthi_8led_7doan is
port ( ckht, ena1khz: in std_logic;
		 led0, led1, led2, led3 : in std_logic_vector( 3 downto 0);
		 led4, led5, led6, led7 : in std_logic_vector( 3 downto 0);
		 daucham8led: in std_logic_vector(7 downto 0);
		 ena_giaima_8led: in std_logic_vector(7 downto 0);
		 anode: out std_logic_vector(7 downto 0);
		 sseg: out std_logic_vector(7 downto 0));
end giaima_hienthi_8led_7doan;

architecture Behavioral of giaima_hienthi_8led_7doan is
signal so_giaima: std_logic_vector(2 downto 0);
signal sel_3b: std_logic_vector(2 downto 0);
signal daucham1led,ena_giaima_1led:std_logic;
begin
dem_3bit_chon_8kenh: entity work.dem_3bit_chon_8kenh
							port map ( ena1khz => ena1khz,
										  ckht => ckht,
										  q    => sel_3b);
quet_anode_8led_7doan: entity work.quet_anode_8led_7doan
							 port map ( sel_3b => sel_3b,
										   anode => anode); 
dahop_8kenh: entity work.dahop_8kenh
							  port map ( sel_3b => sel_3b,
											 led0  => led0,
											 led1  => led1,
											 led2  => led2,
											 led3  => led3,
											 led4  => led4,
											 led5  => led5,
											 led6  => led6,
											 led7  => led7,
											 
											 daucham8led => daucham8led,
											 ena_giaima_8led => ena_giaima_8led,
											 
											 daucham1led => daucham1led,
											 ena_giaima_1led => ena_giaima_1led,
											 so_giaima => so_giaima);
giaima: entity work.giaima_7doan_ena
							port map ( so_giaima => so_giaima,
										  daucham1led=> daucham1led,
										  ena_giaima_1led => ena_giaima_1led,
										  sseg => sseg);
										  

end Behavioral;

