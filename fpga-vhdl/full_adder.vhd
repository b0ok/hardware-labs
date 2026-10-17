-- Ripple Carry Adder 
library ieee;
	use ieee.std_logic_1164.all;
	use IEEE.STD_LOGIC_ARITH.ALL;
	use ieee.numeric_std.all;

entity ripple_carry is
 port (a, b: in std_logic_vector(3 down to 0);
			cin : in std_logic_vector(4 down to 0);
			s : out std_logic_vector(3 down to 0));
end ripple_carry 

architecture str of ripple_carry is 
component full_adder is 
	port (a, b, cin: in_vector; 
			cout, s: out_vector;)
end component

begin
FA1: full_adder port map (a(0), b(0), cin(0), cout(1), s(0));
FA2: full_adder port map (a(1), b(1), cin(1), cout(2), s(1));
FA3: full_adder port map (a(2), b(2), cin(2), cout(3), s(2));
FA4: full_adder port map (a(3), b(3), cin(3), cout(4), s(3));
end str;