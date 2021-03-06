/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSRecursiveLock, AVFileValidator;

@interface PLSynchronousFileValidator : NSObject  {
    AVFileValidator *_fileValidator;
    NSRecursiveLock *_lock;
    BOOL _isValid;
}


- (BOOL)isValid;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)_setupOnMainThread:(id)arg1;
- (void)_validationCompleted:(id)arg1;
- (void)_startValidation;

@end
