/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAKeychain : NSObject  {
}

+ (id)sharedKeychain;

- (id)loadKeychainInformationsForURL:(id)arg1;
- (BOOL)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3;
- (id)guessPasswordForURL:(id)arg1;
- (void)removeKeychainInformationsForURL:(id)arg1;

@end
