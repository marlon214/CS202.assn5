#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include <iomanip>

using namespace std;

enum class LayerType { OIL, WATER, ROCK };

//Class for layers of liquids/things to be separated in the visual simulation in main
class Layer
{
	char displayChar;
	LayerType type;
	static const int drawWidth = 20;
	void setLayerType(LayerType type)
	{
		this->type = type;
		switch (type)
		{
		case LayerType::OIL:
			displayChar = '-';
			break;
		case LayerType::WATER:
			displayChar = '^';
			break;
		case LayerType::ROCK:
			displayChar = 'O';
			break;
		default:
			displayChar = ' ';
			break;
		}
	}

public:
	Layer() {}
	Layer(LayerType type)
	{
		setLayerType(type);
	}
	friend bool operator >(Layer, Layer);
	friend bool operator <(Layer, Layer);
	friend ostream& operator << (ostream&, const Layer&);
	friend istream& operator >> (istream&, Layer&);
};

//Static friends operators (necessary to be able to sort Layers)
bool operator >(Layer left, Layer right) { return left.type > right.type; }
bool operator <(Layer left, Layer right) { return left.type < right.type; }

ostream& operator << (ostream& out, const Layer& layer)
{
	out << setw(Layer::drawWidth) << setfill(layer.displayChar) << "" << setfill(' ') << endl;

	return out;
}

istream& operator >> (istream& in, Layer& layer)
{
	int type;
	in >> type;
	layer.setLayerType(static_cast<LayerType>(type));

	return in;
}

#endif