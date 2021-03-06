/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VCCapabilities : NSObject  {
    BOOL isAudioEnabled;
    BOOL isAudioPausedToStart;
    BOOL isVideoEnabled;
    BOOL isVideoPausedToStart;
    BOOL isDuplexVideoOnly;
    BOOL isDuplexAudioOnly;
    BOOL isKeyExchangeEnabled;
    BOOL isRelayEnabled;
    BOOL isRelayForced;
    BOOL requiresWifi;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
}

@property BOOL requiresWifi;
@property BOOL isRelayForced;
@property BOOL isRelayEnabled;
@property BOOL isVideoPausedToStart;
@property BOOL isAudioPausedToStart;
@property unsigned int actualVideoCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredAudioCodec;
@property BOOL isKeyExchangeEnabled;
@property BOOL isDuplexAudioOnly;
@property BOOL isDuplexVideoOnly;
@property BOOL isVideoEnabled;
@property BOOL isAudioEnabled;

+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;

- (void)setActualAudioCodec:(unsigned int)arg1;
- (void)setIsKeyExchangeEnabled:(BOOL)arg1;
- (BOOL)isAudioPausedToStart;
- (BOOL)isKeyExchangeEnabled;
- (unsigned int)preferredAudioCodec;
- (unsigned int)actualAudioCodec;
- (BOOL)isVideoPausedToStart;
- (void)setIsRelayForced:(BOOL)arg1;
- (void)setIsVideoPausedToStart:(BOOL)arg1;
- (void)setIsAudioPausedToStart:(BOOL)arg1;
- (void)setPreferredVideoCodec:(unsigned int)arg1;
- (void)setIsDuplexAudioOnly:(BOOL)arg1;
- (void)setIsDuplexVideoOnly:(BOOL)arg1;
- (void)setIsVideoEnabled:(BOOL)arg1;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (unsigned int)actualVideoCodec;
- (unsigned int)preferredVideoCodec;
- (BOOL)requiresWifi;
- (BOOL)isRelayForced;
- (BOOL)isDuplexAudioOnly;
- (BOOL)isVideoEnabled;
- (BOOL)isAudioEnabled;
- (void)setIsRelayEnabled:(BOOL)arg1;
- (BOOL)isRelayEnabled;
- (void)setActualVideoCodec:(unsigned int)arg1;
- (BOOL)isDuplexVideoOnly;
- (void)setRequiresWifi:(BOOL)arg1;
- (void)setPreferredAudioCodec:(unsigned int)arg1;
- (id)init;
- (id)description;

@end
