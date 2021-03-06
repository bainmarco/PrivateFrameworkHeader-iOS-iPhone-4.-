/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSString, NSMutableArray;

@interface Alert : NSObject  {
    NSString *_title;
    NSString *_bodyText;
    int _type;
    int _defaultAction;
    int _otherAction;
    int _hideAction;
    int _tableAction;
    NSMutableArray *_tableItems;
    int _indexOfSelectedTableItem;
    id _context;
}


- (id)bodyText;
- (void)setContext:(id)arg1;
- (int)type;
- (id)context;
- (id)title;
- (void)dealloc;
- (int)defaultAction;
- (int)hideAction;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4;
- (id)_buttonTitleForAction:(int)arg1;
- (id)buttonTitles;
- (int)actionForButtonTag:(unsigned int)arg1;
- (int)tableAction;
- (void)setHideAction:(int)arg1;
- (id)tableItems;
- (void)setTableItems:(id)arg1 withTitles:(id)arg2;
- (void)setSelectedTableItemIndex:(int)arg1;
- (id)selectedTableItem;

@end
