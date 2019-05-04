<template>
    <div>
        <h1>Version {{ version }}</h1>
    </div>
</template>

<script lang="ts">
import Vue from 'vue'
import Component from 'vue-class-component'
import { Watch } from 'vue-property-decorator'
import { Route } from 'vue-router'
import { Getter } from 'vuex-class';
import _ from 'lodash';

interface WithRouter {
    $route: Route
}

@Component<Versions>({
    beforeRouteEnter(to, from, next) {
        next((vm:Versions) => {
            if (_.indexOf(vm.availableVersions, to.params.version) != -1) {
                vm.version = to.params.version;
            }
            else {
                vm.version = '12.1.2'
            }
        })
    }
})
export default class Versions extends Vue implements WithRouter {
    version:string = ''

    @Getter('availableVersions') availableVersions:any

    mounted() {
        this.version = this.$route.params.version || '12.1.2'    
    }
}

</script>

