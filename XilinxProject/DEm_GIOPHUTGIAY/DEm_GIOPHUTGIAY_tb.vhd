--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:56:31 03/15/2018
-- Design Name:   
-- Module Name:   D:/ThietKeLogicSo/DOAN/DEm_GIOPHUTGIAY/DEm_GIOPHUTGIAY_tb.vhd
-- Project Name:  DEm_GIOPHUTGIAY
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DEm_GIOPHUTGIAY
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY DEm_GIOPHUTGIAY_tb IS
END DEm_GIOPHUTGIAY_tb;
 
ARCHITECTURE behavior OF DEm_GIOPHUTGIAY_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DEm_GIOPHUTGIAY
    PORT(
         CKHT : IN  std_logic;
         ENA_DB : IN  std_logic;
         RST : IN  std_logic;
         ENA_UP : IN  std_logic;
         ENA_DW : IN  std_logic;
         ENA_CHINH : IN  std_logic;
         ENA_UD : IN  std_logic;
         GIATRI_MOD : IN  std_logic_vector(1 downto 0);
         GIAY : OUT  std_logic_vector(5 downto 0);
         PHUT : OUT  std_logic_vector(5 downto 0);
         GIO : OUT  std_logic_vector(4 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CKHT : std_logic := '0';
   signal ENA_DB : std_logic := '0';
   signal RST : std_logic := '0';
   signal ENA_UP : std_logic := '0';
   signal ENA_DW : std_logic := '0';
   signal ENA_CHINH : std_logic := '0';
   signal ENA_UD : std_logic := '0';
   signal GIATRI_MOD : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal GIAY : std_logic_vector(5 downto 0);
   signal PHUT : std_logic_vector(5 downto 0);
   signal GIO : std_logic_vector(4 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant CKHT_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DEm_GIOPHUTGIAY PORT MAP (
          CKHT => CKHT,
          ENA_DB => ENA_DB,
          RST => RST,
          ENA_UP => ENA_UP,
          ENA_DW => ENA_DW,
          ENA_CHINH => ENA_CHINH,
          ENA_UD => ENA_UD,
          GIATRI_MOD => GIATRI_MOD,
          GIAY => GIAY,
          PHUT => PHUT,
          GIO => GIO
        );

   -- Clock process definitions
   CKHT_process :process
   begin
		CKHT <= '0';
		wait for CKHT_period/2;
		CKHT <= '1';
		wait for CKHT_period/2;
   end process;
 CKHT <= '1', '0' after 100 ns, '1' after 250 ns;

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CKHT_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
