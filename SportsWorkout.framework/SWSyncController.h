/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class SWSyncHost, NSString, SWSyncServiceConnection, <SWSyncControllerDelegate>, NSMutableArray;

@interface SWSyncController : NSObject  {
    int _uploadCount;
    <SWSyncControllerDelegate> *_syncDelegate;
    SWSyncHost *_syncHost;
    SWSyncServiceConnection *_currentSyncConnection;
    NSMutableArray *_empedDirectoriesToSync;
    NSMutableArray *_workoutFilesToSync;
    NSString *_syncPin;
    NSString *_currentlySyncingWorkoutFilePath;
    NSString *_baseDirectoryPath;
    BOOL _shouldMoveFilesToSynchedDirectoryWhenDone;
}

@property int uploadCount;
@property BOOL shouldMoveFilesToSynchedDirectoryWhenDone;
@property <SWSyncControllerDelegate> * syncDelegate;


- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (BOOL)shouldMoveFilesToSynchedDirectoryWhenDone;
- (id)initWithBaseDirectoryPath:(id)arg1;
- (void)visitNikeWebSite;
- (void)_syncWorkoutsForNextEmpedDirectory;
- (void)_syncNextWorkout;
- (void)connectionDidSyncWorkout:(id)arg1;
- (int)uploadCount;
- (void)setUploadCount:(int)arg1;
- (void)setShouldMoveFilesToSynchedDirectoryWhenDone:(BOOL)arg1;
- (id)syncDelegate;
- (void)setSyncDelegate:(id)arg1;
- (id)_syncHost;
- (void)syncAllWorkouts;
- (void)connection:(id)arg1 didGeneratePIN:(id)arg2;
- (void)connection:(id)arg1 didConfirmEmail:(id)arg2 screenName:(id)arg3;
- (void)connection:(id)arg1 didReplaceOldPINWithNewPIN:(id)arg2;
- (void)connectionDidReturnStatusUnconfirmed:(id)arg1;
- (void)connectionDidReturnStatusInvalid:(id)arg1;
- (void)connection:(id)arg1 didGenerateToken:(id)arg2;
- (void)connectionDidCompleteSync:(id)arg1;

@end
