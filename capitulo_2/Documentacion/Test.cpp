/**
This is a test class to show Doxygen format documentation.
*/
class Test {
public:
	/// The Test constructor.
	/**
	\param s the name of the Test.
	*/
	Test(string s);
	/// Start running the test.
	/**
	\param max maximum time of test delay.
	\param silent if true, do not provide output.
	\sa Test()
	*/
	int run(int max, bool silent);
};
