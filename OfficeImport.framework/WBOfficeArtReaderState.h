/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState  {
    WBReader *mReader;
    int mCurrentTextType;
}

@property int currentTextType;
@property WBReader * reader;


- (void)setCurrentTextType:(int)arg1;
- (int)currentTextType;
- (id)reader;
- (void)setReader:(id)arg1;
- (id)initWithClient:(Class)arg1;

@end