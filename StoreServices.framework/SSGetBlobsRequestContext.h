/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;

@interface SSGetBlobsRequestContext : SSBlobsRequestContext <NSCopying, SSCoding> {
    NSArray *_blobIdentifiers;
}

@property(copy) NSArray * blobIdentifiers;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)blobIdentifiers;
- (void)setBlobIdentifiers:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
