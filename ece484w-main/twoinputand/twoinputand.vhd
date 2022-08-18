library ieee;
use ieee.std_logic_1164.all;

entity twoinputand is 
	port(A, B: in bit; Y:out bit);
end entity twoinputand;

architecture structure of twoinputand is
begin
	process(A,B)
	begin
		if A ='1' and B = '1' then
			Y <= '1' after 10 ns;
		elsif A ='1' and B = '0' then
			Y <= '0' after 10 ns;		
		elsif A ='0' and B = '1' then
			Y <= '0' after 10 ns;	
		elsif A ='0' and B = '0' then
			Y <= '0' after 10 ns;	
		end if;
	end process;
end structure;