#pragma once

class Poo
{
public:
	Poo(int in_x, int in_y, int in_vx, int in_vy)
	{
  		x = in_x;
		y = in_y;
		vx = in_vx;
		vy = in_vy;
	}
	void Update();
	void ProcessConsumption(int Dude0x, int Dude0y, int Dude0width, int Dude0height);
	bool IsPooEaten() const;   
	void Draw(Graphics& gfx) const;
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool IsEaten = false;

};