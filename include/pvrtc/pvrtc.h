/**
 *  -----------------------------------------------
 *   POWERVR SDK SOFTWARE END USER LICENSE AGREEMENT
 *  -----------------------------------------------
 *  The MIT License (MIT)
 *  Copyright (c) Imagination Technologies Ltd.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.

 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

#pragma once

#include <cstdint>

extern "C" {
    /**
     * @brief   Decompresses PVRTC to RGBA 8888.
     * @param   compressedData    The PVRTC texture data to decompress.
     * @param   do2bitMode        Signifies whether the data is PVRTC2 or PVRTC4.
     * @param   xDim              X dimension of the texture.
     * @param   yDim              Y dimension of the texture.
     * @param   isVersionII       Signifies whether the data is version I or II of the PVRTC algorithm.
     * @param   outResultImage    The decompressed texture data.
     * 
     * @returns Return the amount of data that was decompressed.
     */
    std::uint32_t PVRTDecompressPVRTC(const void* compressedData, std::uint32_t do2bitMode, std::uint32_t xDim, std::uint32_t yDim, std::uint32_t isVersionII, uint8_t* outResultImage);

    /// <summary>Decompresses ETC to RGBA 8888.</summary>
    /// <param name="srcData">The ETC texture data to decompress</param>
    /// <param name="xDim">X dimension of the texture</param>
    /// <param name="yDim">Y dimension of the texture</param>
    /// <param name="dstData">The decompressed texture data</param>
    /// <param name="mode">The format of the data</param>
    /// <returns>Return The number of bytes of ETC data decompressed</returns>
    std::uint32_t PVRTDecompressETC(const void* srcData, std::uint32_t xDim, uint32_t yDim, void* dstData, uint32_t mode);
}