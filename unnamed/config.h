#include <iostream>

class Config
{
public:
	struct Window 
	{
		static const int SCREEN_WIDTH = 640;
		static const int SCREEN_HEIGHT = 480;
		static constexpr const int BG_COLOR[] = {0,255,255};
		static constexpr const char TITLE[] = "GAME";
	};

	struct Player 
	{
		struct pos {
			static constexpr const float X = 10;
			static constexpr const float Y = 10;
		};

		struct size {
			static constexpr const float WIDTH = 10;
			static constexpr const float HEIGHT = 10;
		};

		static constexpr const char sprite[] = "PATH";
	};
};