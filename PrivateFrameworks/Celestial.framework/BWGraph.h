/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <BWGraphStatusDelegate>, NSMutableArray, NSObject<OS_dispatch_group>;

@interface BWGraph : NSObject {
    BOOL _beingConfigured;
    BOOL _classicRetainedBufferCount;
    NSObject<OS_dispatch_group> *_commitGroup;
    NSMutableArray *_connections;
    long _errorStatus;
    long long _inflightConfigurationID;
    NSMutableArray *_nodes;
    NSMutableArray *_outputsWithSharedPools;
    BOOL _running;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_sourceNodes;
    NSObject<OS_dispatch_group> *_startGroup;
    <BWGraphStatusDelegate> *_statusDelegate;
    BOOL _supportsLiveReconfiguration;
}

@property long errorStatus;
@property <BWGraphStatusDelegate> * statusDelegate;
@property(readonly) BOOL supportsLiveReconfiguration;

+ (void)initialize;

- (id)_breadthFirstEnumerator;
- (id)_depthFirstEnumerator;
- (void)_makeParentConfigurationChangesLive;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (BOOL)_prepareNodesWithConfigurationChanges:(id*)arg1;
- (BOOL)_resolveFormats:(id*)arg1;
- (BOOL)_resolveRetainedBufferCounts:(id*)arg1;
- (id)_reverseBreadthFirstEnumerator;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (void)_waitForOutstandingStartOrCommitOperationToComplete;
- (BOOL)addNode:(id)arg1 error:(id*)arg2;
- (void)beginConfiguration;
- (BOOL)commitConfigurationWithID:(long long)arg1 error:(id*)arg2;
- (BOOL)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (void)dealloc;
- (id)dotString;
- (long)errorStatus;
- (id)init;
- (void)setErrorStatus:(long)arg1;
- (void)setStatusDelegate:(id)arg1;
- (BOOL)start:(id*)arg1;
- (id)statusDelegate;
- (BOOL)stop:(id*)arg1;
- (BOOL)supportsLiveReconfiguration;
- (void)waitForOutstandingStartOrCommitOperationToComplete;

@end