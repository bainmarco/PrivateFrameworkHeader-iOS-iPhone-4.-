/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject  {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}


- (id)init;
- (void)dealloc;
- (void)setRowSpan:(int)arg1;
- (void)setProperties:(id)arg1;
- (int)gridSpan;
- (int)rowSpan;
- (int)spanAlongDir:(int)arg1;
- (void)setGridSpan:(int)arg1;
- (BOOL)horzMerge;
- (void)setHorzMerge:(BOOL)arg1;
- (BOOL)vertMerge;
- (void)setVertMerge:(BOOL)arg1;
- (BOOL)merge:(int)arg1;
- (int)topRow;
- (void)setTopRow:(int)arg1;
- (int)leftColumn;
- (void)setLeftColumn:(int)arg1;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)properties;

@end