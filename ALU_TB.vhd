--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:50:38 04/14/2022
-- Design Name:   
-- Module Name:   C:/MyStuff/College/Universidad Tecnologica de Panama/Year IV/Microprocesadores/ALU/ALU_TB.vhd
-- Project Name:  ALU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU
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
use IEEE.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ALU_TB IS
END ALU_TB;
 
ARCHITECTURE behavior OF ALU_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         a : IN  std_logic_vector(7 downto 0);
         b : IN  std_logic_vector(7 downto 0);
         sel : IN  std_logic_vector(3 downto 0);
         y : OUT  std_logic_vector(7 downto 0);
         cin : IN  std_logic_vector(3 downto 0));
        
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(7 downto 0) := (others => '0');
   signal b : std_logic_vector(7 downto 0) := (others => '0');
   signal sel : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal y : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          a => a,
          b => b,
          sel => sel,
          y => y,
          cin => cin
        );

   -- Clock process definitions


   -- Stimulus process
   stim_proc: process
   begin		
	
	a <= x"04"; -- Se coloca el numero 4 como entrada (00000100)
	b <= x"08"; -- Se coloca el numero 8 como entrada (00001000)
	sel <= x"0"; -- Se inicia con 0000
	cin <= x"0"; -- Se inicia con 0000 
	wait for 10 ns; -- 0s - 10s
  
	for i in 1 to 15 loop -- 10s - 160ns
	cin <= x"0";
   sel <= sel + x"1";
   wait for 10 ns;
	end loop;
	
	for i in 15 to 31 loop -- 160ns - 320ns
	cin <= x"1";
	sel <= sel + x"1";
	wait for 10 ns;
	end loop;
	
   end process;
END;
