/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSArray, NSProtocolChecker, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, NSData;

@interface IMDaemonListener : NSObject  {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_persistentProperties;
    NSMutableArray *_deferredChatMessages;
    NSMutableArray *_handlers;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_services;
    NSDate *_myIdleSince;
    NSData *_myPicture;
    NSString *_myStatusMessage;
    NSString *_myNowPlayingString;
    unsigned int _myStatus;
    unsigned long long _vcCapabilities;
    BOOL _setupComplete;
    BOOL _holdingChatMessages;
}

@property(readonly) BOOL isSetupComplete;
@property(readonly) NSArray * handlers;
@property(readonly) NSArray * allServices;
@property(readonly) unsigned int myStatus;
@property(readonly) NSString * myStatusMessage;
@property(readonly) unsigned int myIdleTime;
@property(readonly) unsigned long long vcCapabilities;
@property(readonly) BOOL shouldHoldChatMessages;
@property(readonly) BOOL isHoldingChatMessages;
@property(readonly) NSDictionary * persistentProperties;
@property(readonly) NSDictionary * properties;


- (oneway void)accountRemoved:(id)arg1;
- (id)allServices;
- (id)serviceWithName:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (id)properties;
- (id)valueOfPersistentProperty:(id)arg1;
- (oneway void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)addHandler:(id)arg1;
- (oneway void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (oneway void)setupComplete;
- (oneway void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (oneway void)account:(id)arg1 postedError:(id)arg2;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 invitationReceived:(id)arg4;
- (oneway void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (unsigned int)myStatus;
- (oneway void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;
- (oneway void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(unsigned int)arg4 properties:(id)arg5;
- (oneway void)account:(id)arg1 blockIdleStatusChanged:(BOOL)arg2;
- (oneway void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 messageReceived:(id)arg4;
- (oneway void)standaloneFileTransferRegistered:(id)arg1;
- (void)_noteDisconnected;
- (BOOL)isHoldingChatMessages;
- (id)handlers;
- (BOOL)isSetupComplete;
- (void)removeHandler:(id)arg1;
- (void)_reallyProcessMyStatusChanged;
- (void)_processMyStatusChanged;
- (unsigned long long)vcCapabilities;
- (void)_processDeferredInvitationDictionary:(id)arg1;
- (void)_deferNotification:(id)arg1;
- (BOOL)shouldHoldChatMessages;
- (void)holdChatMessages;
- (void)releaseHeldChatMessages;
- (oneway void)defaultsChanged:(id)arg1 forService:(id)arg2;
- (oneway void)account:(id)arg1 defaultsChanged:(id)arg2;
- (oneway void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (oneway void)account:(id)arg1 statusChanged:(id)arg2;
- (oneway void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (oneway void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;
- (oneway void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;
- (oneway void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;
- (oneway void)allFileTransfers:(id)arg1;
- (oneway void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (oneway void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (oneway void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (oneway void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;
- (oneway void)account:(id)arg1 blockListChanged:(id)arg2;
- (oneway void)account:(id)arg1 allowListChanged:(id)arg2;
- (oneway void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;
- (id)valueOfProperty:(id)arg1;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;
- (oneway void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (oneway void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;
- (id)persistentProperties;
- (id)myStatusMessage;
- (unsigned long)myIdleTime;

@end
