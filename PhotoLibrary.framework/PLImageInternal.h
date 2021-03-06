/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSURL, NSData, UIImage;

@interface PLImageInternal : MLPhotoMemoryStorage  {
    NSURL *_url;
    NSData *_data;
    NSData *_urlData;
    UIImage *_previewImage;
}


- (id)title;
- (void)dealloc;
- (id)pathForImageFile;
- (int)imageID;
- (id)imageWithFormat:(int)arg1;
- (id)_data;
- (BOOL)hasFullSizeImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;

@end
