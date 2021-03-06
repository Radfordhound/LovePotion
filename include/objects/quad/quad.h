#pragma once

class Quad
{
	public:
		Quad() {};
		Quad(float subTextureX, float subTextureY, float subTextureWidth, float subTextureHeight, float atlasWidth, float atlasHeight);

		void SetSubTexture(Tex3DS_SubTexture * subtexture);

	private:
		int NextPow2(unsigned int x);

		float width;
		float height;

		float u0;
		float v0;

		float u1;
		float v1;
};