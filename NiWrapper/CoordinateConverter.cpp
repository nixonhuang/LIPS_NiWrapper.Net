/*
    Copyright (C) 2022 LIPS Corporation

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
	*/

#include "Defines.h"
#include "OpenNI.h"
using namespace openni;

extern "C" {

ONI_WRAPPER_API Status CoordinateConverter_convertDepthToColor(
	VideoStream* depthStream, VideoStream* colorStream, int depthX, int depthY, DepthPixel depthZ,
	int* pColorX, int* pColorY)
{
	return CoordinateConverter::convertDepthToColor(*depthStream, *colorStream, depthX, depthY, depthZ, pColorX, pColorY);
}

ONI_WRAPPER_API Status CoordinateConverter_convertDepthToWorld(
	VideoStream* depthStream, int depthX, int depthY, DepthPixel depthZ,
	float* pWorldX, float* pWorldY, float* pWorldZ)
{
	return CoordinateConverter::convertDepthToWorld(*depthStream, depthX, depthY, depthZ, pWorldX, pWorldY, pWorldZ);
}

ONI_WRAPPER_API Status CoordinateConverter_convertDepthToWorld_Float(
	VideoStream* depthStream, float depthX, float depthY, float depthZ,
	float* pWorldX, float* pWorldY, float* pWorldZ)
{
	return CoordinateConverter::convertDepthToWorld(*depthStream, depthX, depthY, depthZ, pWorldX, pWorldY, pWorldZ);
}

ONI_WRAPPER_API Status CoordinateConverter_convertWorldToDepth(
	VideoStream* depthStream, float worldX, float worldY, float worldZ,
	int* pDepthX, int* pDepthY, DepthPixel* pDepthZ)
{
	return CoordinateConverter::convertWorldToDepth(*depthStream, worldX, worldY, worldZ, pDepthX, pDepthY, pDepthZ);
}

ONI_WRAPPER_API Status CoordinateConverter_convertWorldToDepth_Float(
	VideoStream* depthStream, float worldX, float worldY, float worldZ,
	float* pDepthX, float* pDepthY, float* pDepthZ)
{
	return CoordinateConverter::convertWorldToDepth(*depthStream, worldX, worldY, worldZ, pDepthX, pDepthY, pDepthZ);
}

};
