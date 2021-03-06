/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, NSMutableData;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

@property(readonly) NSError * parserError;
@property(retain) NSMutableData * octetStreamData;


- (id)init;
- (void)dealloc;
- (id)description;
- (id)parserError;
- (void)setOctetStreamData:(id)arg1;
- (BOOL)task:(id)arg1 receivedData:(id)arg2;
- (BOOL)processData:(id)arg1;
- (id)octetStreamData;

@end
