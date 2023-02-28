#include <iostream>
using namespace std;

class Vine {
private:
	size_t volume;
	size_t quanity;
	string type;
public:
	Vine() {
		type = "pink";
		volume = 0.7;
		quanity = 10;
	}
	Vine(size_t fvolume, string ftype, size_t fquanity) {
		volume = fvolume;
		type = ftype;
		quanity = fquanity;
	}
	size_t getVolume() { return volume; }
	size_t getQuanity() { return quanity; }
	string getType() { return type; }
	void setVolume(size_t fvolume) { volume = fvolume; }
	void setType(string ftype) { type = ftype; }
	void setQuanity(size_t fquanity) { quanity = fquanity; }
};

int main() {
	Vine v1;
	cout << v1.getType() << v1.getVolume() << v1.getQuanity << endl;
	v1.setType("ñabernet sauvignon");
	v1.setQuanity(10);
	return 0;
}
