
class rectangle
{
	public:
		float length;
		float width;
		float get_area(void);
		float get_perimeter(void);
		rectangle();
	private:
		float area;
		float perimeter;
		float diagonal;
		void calc_area(void);
		void calc_perimeter(void);
};
