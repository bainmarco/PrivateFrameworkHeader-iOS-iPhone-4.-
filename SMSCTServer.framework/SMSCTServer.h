/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SMSCTServer.framework/SMSCTServer
 */

@class NSThread, NSMutableDictionary, CPDistributedMessagingCenter;

@interface SMSCTServer : NSObject  {
    NSMutableDictionary *_associationSets;
    NSMutableDictionary *_associationForRecord;
    CPDistributedMessagingCenter *_messageCenter;
    NSThread *_messageThread;
}

+ (id)sharedServer;

- (void)start;
- (void)dealloc;
- (void)_significantTimeChanged;
- (void)_registerForCTNotifications;
- (int)_associationIDForRecord:(int)arg1;
- (void)_removeAssociationSetForRecord:(int)arg1;
- (BOOL)_removeRecordFromAssociations:(int)arg1;
- (void)_addRecord:(int)arg1 forAssociationID:(int)arg2;
- (void)updateMMSCapability;
- (void)_registerForClientCompositionNotifications;
- (void)_unregisterForClientCompositionNotifications;
- (id)_sendClientComposedMessage:(id)arg1 userInfo:(id)arg2;
- (BOOL)_checkMMSEnablement;
- (unsigned char)_readMMSUserOverride;
- (void)playMessageSent;
- (void)_acknowledgeMessageWithKey:(int)arg1;
- (void)_clearPendingIncomingMessageQueue;
- (void)_processReceivedMessageWithInfo:(struct __CFDictionary { }*)arg1;
- (void)_processReceivedMessageReceiptWithInfo:(struct __CFDictionary { }*)arg1;
- (void)_ingestIncomingCTMessage:(id)arg1;
- (void)_reallySendSMSRequest:(struct __CFDictionary { }*)arg1 withProcessedParts:(struct __CFArray { }*)arg2 recordID:(unsigned int)arg3;
- (void)_sendCompleted:(unsigned char)arg1 forRecord:(unsigned int)arg2;
- (void)_checkAddressBook:(void*)arg1;
- (void)_checkAddressBookAfterQuiescence;
- (void)_mobileSMSDidResume;
- (void)stop;

@end
