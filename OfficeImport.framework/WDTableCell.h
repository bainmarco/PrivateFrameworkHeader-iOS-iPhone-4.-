/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, WDTableRow, WDTableCellProperties;

@interface WDTableCell : NSObject  {
    int mIndex;
    WDTableRow *mRow;
    WDTableCellProperties *mProperties;
    WDText *mText;
    BOOL mUseTrackedProperties;
}


- (int)index;
- (id)row;
- (id)text;
- (void)dealloc;
- (id)initWithRow:(id)arg1 at:(int)arg2;
- (BOOL)useTrackedProperties;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (int)compareIndex:(id)arg1;
- (void)clearProperties;
- (double)cellWidth;
- (id)properties;

@end
