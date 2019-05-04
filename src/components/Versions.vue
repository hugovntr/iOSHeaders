<template>
    <div id="versions" class="container-fluid">
        <div class="d-flex justify-content-around">
            <router-link :to="{name: 'versions', params:{version: item}}" v-for="(item, index) in availableVersions" :key="index" tag="a" class="btn btn-light">{{item}}</router-link>
        </div>
    </div>
</template>

<script lang="ts">
import Vue from 'vue'
import Component from 'vue-class-component';
import { Getter } from 'vuex-class';

@Component
export default class Versions extends Vue {
    versions: Array<string> = []

    @Getter('availableVersions') availableVersions:any
}

</script>

