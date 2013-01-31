/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASGetOptionsTask, NSError, ASPolicyManager, ASTask, NSMutableDictionary;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
    ASPolicyManager *_policyManager;
    NSError *_versionError;
    NSMutableDictionary *_taskIDToTask;
    ASTask *_modalGetOptionsTask;
    ASGetOptionsTask *_getOptionsTask;
    ASTask *_modalPolicyKeyUpdateTask;
}


- (void)dealloc;
- (void)shutdown;
- (void)cancelTaskWithID:(int)arg1;
- (id)deviceID;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (id)_version;
- (void)policyManagerFailedToUpdatePolicy:(id)arg1;
- (BOOL)taskIsModal:(id)arg1;
- (void)finishTask:(id)arg1 withError:(id)arg2;
- (void)_finishAllTasksWithError:(id)arg1;
- (void)setEASProtocolVersion:(id)arg1;
- (void)_populateVersionDescriptions;
- (void)taskDidFinish:(id)arg1;
- (void)updatePolicyKeyWithDelegateTask:(id)arg1;
- (void)requestEASVersionWithDelegateTask:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)cancelAllTasks;
- (void)policyManagerUpdatedPolicy:(id)arg1;
- (void)getOptionsTask:(id)arg1 completedWithStatus:(int)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5;
- (void)cancelTask:(id)arg1;
- (id)stateString;
- (id)initWithAccount:(id)arg1 policyManager:(id)arg2;
- (id)easProtocolVersion;
- (id)policyKey;
- (id)policyManager;
- (id)protocol;

@end