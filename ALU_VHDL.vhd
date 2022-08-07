----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:25:11 04/13/2022 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port (
    a, b : in  STD_LOGIC_VECTOR(7 downto 0);  --Entradas
    sel : in  STD_LOGIC_VECTOR(3 downto 0);  -- Seleccionador
    y : out  STD_LOGIC_VECTOR(7 downto 0); -- Salida
    cin : in STD_LOGIC_VECTOR(3 downto 0)); -- Carry
end ALU; 

architecture Behavioral of ALU is
begin -- Usando codigo concurrente when/else
  y <= a when sel="0000" else -- Transferir a
					a + 1 when sel="0001" else -- Incrementa a
					a - 1 when sel="0010" else -- Decrementa a
					b when sel="0011" else -- Transferir b
					b + 1 when sel="0100" else -- Incrementa b
					b - 1 when sel="0101" else -- Decrementa b
					a + b when sel="0110" else -- Suma a + b
					a + b + cin when sel="0111" else -- Suma a + b + acarreo
					NOT a when sel="1000" else -- NOT a
					NOT b when sel="1001" else -- NOT b
					a AND b when sel="1010" else -- AND
					a OR b when sel="1011" else -- OR
					a NAND b when sel="1100" else -- NAND
					a NOR b when sel="1101" else -- NOR
					a XOR b when sel="1110" else -- XOR
					a XNOR b; -- XNOR
end Behavioral;