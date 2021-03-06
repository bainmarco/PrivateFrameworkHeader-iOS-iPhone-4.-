/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIButton, CKBalloonView;

@interface CKMessageCell : UITableViewCell  {
    CKBalloonView *_balloonView;
    UIButton *_failedButton;
    float _topPadding;
    float _bottomPadding;
    id _replacementMessageBubbleData;
}

@property(retain) id replacementMessageBubbleData;
@property(readonly) CKBalloonView * balloonView;

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;
+ (void)_initializeSafeCategory;

- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)_multiselectBackgroundColor;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)addBalloonView:(id)arg1;
- (void)_failPressed:(id)arg1;
- (void)_resetBalloonFrame;
- (void)setReplacementMessageBubbleData:(id)arg1;
- (id)balloonView;
- (void)setTopPadding:(float)arg1 bottomPadding:(float)arg2;
- (id)replacementMessageBubbleData;
- (void)setFailed:(BOOL)arg1;
- (void)didTapBalloon:(id)arg1;
- (void)accessibilityActivate;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
