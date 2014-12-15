# Obsolete

This functionality is a duplicate of `ofPolyline::inside(ofPoint& p)`, so it is obsolete... better to use the one in the core.


## ofxPointInPolyline

This is a simple openFrameworks addon for determining if a given ofPoint lies inside a polygon (specified by an ofPolyline). polygons can be convex/concave, and have any number of vertices. See included example. Usage is simple:

	bool isInside(ofPolyline poly, ofPoint p);
	
Code is adapted from [this link](http://www.geeksforgeeks.org/how-to-check-if-a-given-point-lies-inside-a-polygon/).