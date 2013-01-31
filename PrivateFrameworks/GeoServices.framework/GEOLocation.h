/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEOLocation : PBCodable  {
    double _course;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng *_latLng;
    int _type;
    struct { 
        unsigned int course : 1; 
        unsigned int heading : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int speed : 1; 
        unsigned int timestamp : 1; 
        unsigned int verticalAccuracy : 1; 
        unsigned int altitude : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(retain) GEOLatLng * latLng;
@property BOOL hasType;
@property int type;
@property BOOL hasTimestamp;
@property double timestamp;
@property BOOL hasAltitude;
@property int altitude;
@property BOOL hasHorizontalAccuracy;
@property double horizontalAccuracy;
@property BOOL hasVerticalAccuracy;
@property double verticalAccuracy;
@property BOOL hasSpeed;
@property double speed;
@property BOOL hasHeading;
@property double heading;
@property BOOL hasCourse;
@property double course;

+ (id)locationWithCLLocation:(id)arg1 course:(double)arg2;

- (double)heading;
- (void)setHeading:(double)arg1;
- (double)course;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (int)type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (int)altitude;
- (double)verticalAccuracy;
- (double)horizontalAccuracy;
- (BOOL)hasSpeed;
- (BOOL)hasType;
- (BOOL)readFrom:(id)arg1;
- (void)setHasCourse:(BOOL)arg1;
- (void)setHasHeading:(BOOL)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (void)setHasAltitude:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setCourse:(double)arg1;
- (BOOL)hasCourse;
- (BOOL)hasHeading;
- (void)setVerticalAccuracy:(double)arg1;
- (BOOL)hasVerticalAccuracy;
- (void)setHorizontalAccuracy:(double)arg1;
- (BOOL)hasHorizontalAccuracy;
- (void)setAltitude:(int)arg1;
- (BOOL)hasAltitude;
- (BOOL)hasTimestamp;
- (id)latLng;
- (id)initWithGEOCoordinate:(struct { double x1; double x2; })arg1;
- (void)setLatLng:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (void)setType:(int)arg1;
- (id)_initWithCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; }*)arg1;
- (id)initWithCLLocation:(id)arg1 course:(double)arg2;
- (id)initWithCLLocation:(id)arg1;

@end