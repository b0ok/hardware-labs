library ieee;
	use ieee.std_logic_1164.all;
	
entity full_adder is 
	port (a, b, cin: in_vector; 
			cout, s: out_vector;)
end full_adder; 

architecture str of full_adder is 
begin 
	sum <= a xor b xor c; 
	cout <= (a and b) + (b and c) + (c and a);
end