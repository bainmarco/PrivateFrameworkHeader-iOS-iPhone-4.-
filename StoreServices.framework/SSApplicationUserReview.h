/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString;

@interface SSApplicationUserReview : NSObject  {
    NSString *_applicationPath;
    NSNumber *_itemIdentifier;
    float _userRating;
    NSNumber *_versionIdentifier;
}

@property(getter=isValidReview,readonly) BOOL validReview;
@property float userRating;
@property(readonly) NSString * applicationPath;


- (id)init;
- (void)dealloc;
- (float)userRating;
- (void)setUserRating:(float)arg1;
- (id)initForApplicationWithPath:(id)arg1;
- (BOOL)isValidReview;
- (BOOL)scheduleReview;
- (void)_loadApplicationMetadata;
- (id)applicationPath;

@end
