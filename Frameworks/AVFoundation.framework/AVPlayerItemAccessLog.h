/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVPlayerItemAccessLogInternal;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property(readonly) NSArray * events;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)finalize;
- (unsigned int)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (id)events;
- (id)_accessLogArray;
- (id)initWithLogArray:(id)arg1;

@end