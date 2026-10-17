library ieee;
	use ieee.std_logic_1164.all;
	use ieee.numeric_std.all;
	
entity lab9 is
	port (clk : in std_logic;
			clr : in std_logic;
			control_switch : in std_logic;
			pwmout : out std_logic);
end lab9;

architecture str of lab9 is 
signal cnt : integer range 0 to (50000000/2000)-1 := 0;
signal cmp : integer := 50000000/2000*70/100;	--PWM 50% duty cycle

begin
	process(clk,clr)
	begin
		if clr = '1' then
			cnt <= 0;
		elsif rising_edge(clk) then
			if control_switch = '0' then
				cmp <= 50000000/2000*70/100;	--70%
				if cnt < (50000000/2000) - 1 then
					cnt <= cnt+1;
				else
					cnt <= 0;
				end if;
			else
				cmp <= 50000000/2000*10/100;	--10%
				if cnt < (50000000/2000) - 1 then
					cnt <= cnt+1;
				else
					cnt <= 0;
				end if;
			end if;
		end if;
	end process;
	
	pwmout <= '1' when cnt < cmp else '0';
end str;