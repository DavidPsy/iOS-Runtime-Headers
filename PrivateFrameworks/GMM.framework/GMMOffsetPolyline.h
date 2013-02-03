/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMGeometry, NSData;

@interface GMMOffsetPolyline : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    GMMGeometry *_absolutePoint;
    NSData *_relativePoints;
}

@property(retain) NSData *relativePoints; /* unknown property attribute: V_relativePoints */
@property(retain) GMMGeometry *absolutePoint; /* unknown property attribute: V_absolutePoint */
@property(readonly) BOOL hasAbsolutePoint;
@property(readonly) BOOL hasRelativePoints;

- (id)absolutePoint;
- (void)dealloc;
- (BOOL)hasAbsolutePoint;
- (BOOL)hasRelativePoints;
- (id)init;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (id)relativePoints;
- (void)setAbsolutePoint:(id)arg1;
- (void)setRelativePoints:(id)arg1;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end