#ifndef MOVE_CLASS_H
#define MOVE_CLASS_H

class Move{
	private:
		double x;
		double y;

	public:
		Move(double, double);
		Move add(const Move &) const;
		void showmove() const;
		void reset(double, double);

};

#endif
