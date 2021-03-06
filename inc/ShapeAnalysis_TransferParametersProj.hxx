// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_TransferParametersProj_HeaderFile
#define _ShapeAnalysis_TransferParametersProj_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeAnalysis_TransferParametersProj.hxx>

#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Standard_Real.hxx>
#include <TopLoc_Location.hxx>
#include <Standard_Boolean.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <Handle_TColStd_HSequenceOfReal.hxx>
class Geom_Curve;
class Geom2d_Curve;
class TopoDS_Edge;
class TopoDS_Face;
class TColStd_HSequenceOfReal;
class TopoDS_Vertex;


//! This tool is used for transferring parameters
//! from 3d curve of the edge to pcurve and vice versa.
//! This tool transfers parameters with help of
//! projection points from curve 3d on curve 2d and
//! vice versa
class ShapeAnalysis_TransferParametersProj : public ShapeAnalysis_TransferParameters
{

public:

  
  //! Creats empty constructor.
  Standard_EXPORT ShapeAnalysis_TransferParametersProj();
  
  Standard_EXPORT ShapeAnalysis_TransferParametersProj(const TopoDS_Edge& E, const TopoDS_Face& F);
  
  Standard_EXPORT virtual   void Init (const TopoDS_Edge& E, const TopoDS_Face& F) ;
  
  //! Transfers parameters given by sequence Params from 3d curve
  //! to pcurve (if To2d is True) or back (if To2d is False)
  Standard_EXPORT virtual   Handle(TColStd_HSequenceOfReal) Perform (const Handle(TColStd_HSequenceOfReal)& Papams, const Standard_Boolean To2d) ;
  
  //! Transfers parameter given by  Param from 3d curve
  //! to pcurve (if To2d is True) or back (if To2d is False)
  Standard_EXPORT virtual   Standard_Real Perform (const Standard_Real Param, const Standard_Boolean To2d) ;
  
  //! Returns modifiable flag forcing projection
  //! If it is False (default), projection is done only
  //! if edge is not SameParameter or if tolerance of edge
  //! is greater than MaxTolerance()
  Standard_EXPORT   Standard_Boolean& ForceProjection() ;
  
  //! Recomputes range of curves from NewEdge.
  //! If Is2d equals True parameters are recomputed by curve2d else by curve3d.
  Standard_EXPORT virtual   void TransferRange (TopoDS_Edge& newEdge, const Standard_Real prevPar, const Standard_Real currPar, const Standard_Boolean Is2d) ;
  
  //! Returns False;
  Standard_EXPORT virtual   Standard_Boolean IsSameRange()  const;
  
  //! Make a copy of non-manifold vertex theVert
  //! (i.e. create new  TVertex and replace PointRepresentations for this vertex
  //! from fromedge to toedge. Other representations were copied)
  Standard_EXPORT static   TopoDS_Vertex CopyNMVertex (const TopoDS_Vertex& theVert, const TopoDS_Edge& toedge, const TopoDS_Edge& fromedge) ;
  
  //! Make a copy of non-manifold vertex theVert
  //! (i.e. create new  TVertex and replace PointRepresentations for this vertex
  //! from fromFace to toFace. Other representations were copied)
  Standard_EXPORT static   TopoDS_Vertex CopyNMVertex (const TopoDS_Vertex& theVert, const TopoDS_Face& toFace, const TopoDS_Face& fromFace) ;




  DEFINE_STANDARD_RTTI(ShapeAnalysis_TransferParametersProj)

protected:




private: 

  
  Standard_EXPORT   Standard_Real PreformSegment (const Standard_Real Param, const Standard_Boolean To2d, const Standard_Real First, const Standard_Real Last) ;

  Handle(Geom_Curve) myCurve;
  Handle(Geom2d_Curve) myCurve2d;
  Adaptor3d_CurveOnSurface myAC3d;
  Standard_Real myPrecision;
  TopLoc_Location myLocation;
  Standard_Boolean myForceProj;
  Standard_Boolean myInitOK;


};







#endif // _ShapeAnalysis_TransferParametersProj_HeaderFile
