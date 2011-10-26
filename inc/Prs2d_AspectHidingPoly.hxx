// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_AspectHidingPoly_HeaderFile
#define _Prs2d_AspectHidingPoly_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_AspectHidingPoly_HeaderFile
#include <Handle_Prs2d_AspectHidingPoly.hxx>
#endif

#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Aspect_WidthOfLine_HeaderFile
#include <Aspect_WidthOfLine.hxx>
#endif
#ifndef _Prs2d_AspectRoot_HeaderFile
#include <Prs2d_AspectRoot.hxx>
#endif


//! defines the attributes when drawing a hiding <br>
//!          polyhedral simplification Presentation. <br>
class Prs2d_AspectHidingPoly : public Prs2d_AspectRoot {

public:

  
  Standard_EXPORT   Prs2d_AspectHidingPoly(const Quantity_NameOfColor HidingColorInd,const Quantity_NameOfColor FrameColorInd,const Aspect_TypeOfLine FrameTypeInd,const Aspect_WidthOfLine FrameWidthInd);
  
  Standard_EXPORT     void SetHidingColor(const Quantity_NameOfColor aColorInd) ;
  
  Standard_EXPORT     void SetFrameColor(const Quantity_NameOfColor aFrameColorInd) ;
  
  Standard_EXPORT     void SetFrameType(const Aspect_TypeOfLine aFrameTypeInd) ;
  
  Standard_EXPORT     void SetFrameWidth(const Aspect_WidthOfLine aFrameWidthInd) ;
  
  Standard_EXPORT     void Values(Quantity_NameOfColor& HidingColorInd,Quantity_NameOfColor& FrameColorInd,Aspect_TypeOfLine& FrameTypeInd,Aspect_WidthOfLine& FrameWidthInd) const;




  DEFINE_STANDARD_RTTI(Prs2d_AspectHidingPoly)

protected:




private: 


Quantity_NameOfColor myHidingColorInd;
Quantity_NameOfColor myFrameColorInd;
Aspect_TypeOfLine myFrameTypeInd;
Aspect_WidthOfLine myFrameWidthInd;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif