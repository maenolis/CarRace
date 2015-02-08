
struct point			////Struct face holds model's vertices
{
	float x; 
	float y; 
	float z; 
};

struct face				//Struct face holds model's faces
{
	int vtx[3];
};

struct model			//Struct model holds model(car) variables
{
	point obj_points[17006];
	face obj_faces[35673];
	char Name[60];
	int vertices;
	int faces;
};


//-------- Functions --------------------------------

void Render();
// The function responsible for drawing everything in the 
// OpenGL context associated to a window. 

void Resize(int w, int h);
// Handle the window size changes and define the world coordinate 
// system and projection type

void Setup();
// Set up the OpenGL state machine and create a light source

void Idle();
////Function for animation

void ReadFile(model*);
//Function for reading a model file

void DisplayModel(model);
// Function for displaying a model

void bridgeAnimation();
//Function for bridge animation

void Keyboard(unsigned char key,int x,int y);
// Function for handling keyboard events.

point returnVector(float,float,float,float,float,float);
//Function for making vertexes from vertices

point normalVector(float,float,float,float,float,float);
//Function for making vertical vertices for lighting

void carMove(float v, float&, float&, float&, float, float, float&, bool&, float&);
//Function for counting car x,z axis and angle

void noLifeScenario();
//Function for displaying the "lose" message to the user

void crashedScenario();
//Function for displaying the "crash" message to the user
//and calculate car2 lives

void finishedScenario();
//Function for displaying results to the user
//and start over the game