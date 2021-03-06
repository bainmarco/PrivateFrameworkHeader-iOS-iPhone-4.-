/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class <SBSAccelerometerDelegate>, NSThread, NSLock;

@interface SBSAccelerometer : NSObject  {
    <SBSAccelerometerDelegate> *_delegate;
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    double _interval;
    NSLock *_lock;
    BOOL _orientationEventsEnabled;
    int _orientationEventsToken;
    NSThread *_orientationEventsThread;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property BOOL accelerometerEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;
@property BOOL orientationEventsEnabled;
@property <SBSAccelerometerDelegate> * delegate;


- (void)setAccelerometerEventsEnabled:(BOOL)arg1;
- (double)updateInterval;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setOrientationEventsEnabled:(BOOL)arg1;
- (int)currentDeviceOrientation;
- (BOOL)orientationEventsEnabled;
- (float)yThreshold;
- (float)xThreshold;
- (BOOL)accelerometerEventsEnabled;
- (float)zThreshold;
- (void)_checkOut;
- (void)_serverWasRestarted;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)_checkIn;

@end
